// Book Allocation Problem // Painter Partition is similar

// #include <bits/stdc++.h> 

// bool possiblesolution(vector<int> &pages, int n, int b,int mid){
// 	int pagesum=0;
// 	int studentcount=1;
// 	for(int i=0; i<n; i++){
// 		if(pagesum+pages[i]<=mid){
// 			pagesum+=pages[i];
// 		}
// 		else{
// 			studentcount++;
            // if more student are required to distrubute on ref of mid then return false and if the no of pages of one book is more than the mid then other books cant be allocate hence not be a possible solution
// 			if(studentcount>b || pages[i]>mid){
// 				return false;
// 			}
// 			pagesum=pages[i];
// 		}
// 	}
// 	return true;
// }
// int allocateBooks(vector<int> &pages, int n, int b)
// {
// 	// Write your code here.
// 	int s=0;
// 	int max=0;
// 	int ans=0;
// 	for(int i=0;i<n;i++){
// 		max=max+pages[i];
// 	}
// 	int e=max;

// 	//Limiting Case
// 	if(n<b){
// 		return -1;  
// 	}

// 	int mid=s+(e-s)/2;
// 	while(s<=e){
// 		if(possiblesolution(pages,n,b,mid)){
// 			ans=mid;
// 			e=mid-1;
            // If ans is a possiblr solution then we will store it and then again search for any minimal    solution than current solution....bcz greater than mid would not be a minimum solution
// 		}
// 		else{
// 			s=mid+1;
            // If mid is not a solution then smaller than mid would not be solution bcz if mid cant taken to distrubute the books then smaller than mid values would cause any member to short of books i.e no allocation
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return ans;
// }


//Aggresive cows problem

// bool possiblesolution(vector<int> &stalls, int n, int k, int mid){
//     int cowcount = 1; // Starting with 1 cow at the first stall
//     int lastpos = stalls[0]; // Position of the last placed cow
    
//     for(int i = 1; i < n; i++){ // Start from the second stall
//         if((stalls[i] - lastpos) >= mid){
//             cowcount++;
//             lastpos = stalls[i]; // Update the last cow's position
//         }
//         if(cowcount == k){ // If we've placed all cows
//             return true;
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k) {
//     // Sort the stalls positions
//     sort(stalls.begin(), stalls.end());

//     int s = 0;
//     int max = stalls[stalls.size() - 1]; // Max stall position
//     int n = stalls.size();

//     // Limiting Case: if cows are more than stalls, return -1
//     if(n < k){
//         return -1;
//     }

//     int e = max;
//     int ans = -1;
//     int mid = s + (e - s) / 2;

//     // Binary search to find the largest minimum distance
//     while(s <= e){
//         if(possiblesolution(stalls, n, k, mid)){
//             ans = mid; // Possible solution found, try for larger distance
//             s = mid + 1;
//         } else {
//             e = mid - 1; // Try for smaller distance
//         }
//         mid = s + (e - s) / 2;
//     }

//     return ans;
// }


