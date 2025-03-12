
// int findprefixValue(vector<int>&arr,vector<int>&prefixSum,int n){
//     int q=3;
//     vector<vector<int>>queries={{1,3},{0,2},{2,5}};
//     for(int i=0;i<queries.size();i++){
//         int l=queries[i][0],r=queries[i][1];
//         if(l==0){
//             cout<<prefixSum[r];
//         }
//         else{
//         cout<l<prefixSum[r]-prefixSum[l-1]<<' ';
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<prefixSum[i]<<' ';
//     }
// }