# Binary Search
## Easy
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
arr[] = {1 2 3 4 5} 
K = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> 4 appears at index 3.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
arr[] = {11 22 33 44 55} 
K = 445
<strong>Output:</strong> -1
<strong>Explanation:</strong> 445 is not present.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>binarysearch()</strong> which takes arr[], N and K as input parameters and returns the index of K in the array. If K is not present in the array, return -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(LogN)<br>
<strong>Expected Auxiliary Space:</strong> O(LogN) if solving recursively and O(1) otherwise.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>4</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>