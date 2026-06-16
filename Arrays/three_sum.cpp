#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        // Brute Force  TC-O(N^3 * LOGN ) SC -O(2* NO OF TIRIPLES)'
        //  approach genrate all triplates to avoid duplicate use set data
        //  structure but if a triplate is genrate like -1 0 1 that sum is 0 it
        //  is stored in set what if tipalte is 1 0 -1 then its same tiplaye but
        //  in set -1 0 1 is store so 1 0 -1 also be stored to avoid duplicates
        //  triplate try to sort them so that it can store as - 1 0 1 then any
        //  tirlplate which sum is 1 0 -1 it is also sorted so it beocmes -1 0 1
        //  and in set its peresent so set does not store them

        //   set<vector<int>>st; // st type of vector kyu kyunki tiplate ayega
        //   yani 3 number to aray me store karvauga int n = nums.size();
        //   for(int i = 0; i < n; i++)
        //   {
        //     for(int j = i+1; j < n; j++)
        //     {
        //          for(int k = j+1; k < n; k++) // genrateing all triplates
        //          {
        //             if(nums[i] + nums[j] + nums[k] == 0) // three elemnntes
        //             which sum is 0
        //             {
        //                  vector<int>temp = {nums[i],nums[j],nums[k]}; //
        //                  store all three elememts temp array
        //                  sort(temp.begin(),temp.end());// sort the array so
        //                  that -1 0 1 and 1 0 -1 becomes same -1 0 1 to avoid
        //                  duplicates st.insert(temp); // store in set so that
        //                  it can store unique tirplate
        //             }
        //          }
        //     }
        //   }
        //    vector<vector<int>>ans(st.begin(),st.end()); // store set values
        //    in ans; return ans;

        // Better TC-o(N^2 +LOGN) SC -O(N) + 2*(NO OF TRIPLATE)
        // approach nums[i]+ nums[j]+nums[k] = 0 or we can say nums[k] =
        // -(nums[i]+nums[j]) yani ham 2 loop lagaye i j or k hame in do loop se
        // mile but kese yes hashmap ya but me hashmap me pahle se sari values
        // store nhi karva skta kyuki dek
        // [-1,0,1,2,-1,-4] me 2 -4 liya to -(2-4) =2 ayea or ek 2 le liya h jo
        // ki i vaala  h yani i 2 bar i !=k diya h to muje i or j ke bich vale
        // sare elments hashmap me dalne h fir check kar lena h agar k vala
        // elemnt
        // // hash map me h to vo ek triplate h sort karo set me dalo

        //    set<vector<int>>st; // triplate me 3 elments honge to offcourse
        //    set aray ka banua int n = nums.size(); for(int i = 0; i < n; i++)
        //    {
        //       unordered_map<int,int>mpp; // andar hashmap bnaya kyunki every
        //       i new milege elements
        //      for(int j = i+1; j < n; j++)
        //      {
        //         int third = -(nums[i] + nums[j]);
        //         if(mpp.find(third) != mpp.end()) // yani array me h to mil
        //         gya 3 elementns jika sum 0 h
        //         {
        //             vector<int>temp = {nums[i],nums[j],third}; // store three
        //             values in an array sort(temp.begin(),temp.end()); // sort
        //             karo jisse ek tarh ke elemts hi set me instore ho
        //             st.insert(temp);
        //         }
        //          mpp[nums[j]]++;  // store elemts in hashmap
        //      }
        //    }
        //     vector<vector<int>>ans(st.begin(),st.end());
        //      return ans;

        // Optimal  TC-O(N^2) SC -O(1)
        // dek isme ham array ko pahle hi sort kar lege jisse sare ek jese
        // number pass aajye fir dupliacte avoid karne ke liye check kar lege jo
        // abhi vala elemnt hh vo pahle vale ke equal h
        // kya agar h to skip karo to sort+two pointer approach lagaygege
        // ek i pointer lege jo fix hoga or j= i+1 or k=n-1 ko move karege agar
        // sum > 0 aya yani k ko decrease karege  less then aya sum <0 to j ko
        // increase karege agar equal aya to ans me dal dege or dono ko move
        // karege fir move tab tak karege jab tak dono eqalnhi h
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) // same element can make duplicates to avoid them just check if its eqal skip them
                continue;
            int j = i + 1; // j and k movable pointer
            int k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0)
                {
                    k--;
                }
                else if (sum < 0)
                {
                    j++;
                }
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) // skip same element
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }
};