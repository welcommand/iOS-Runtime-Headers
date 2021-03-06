/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchGridDataSource : NSObject {
    NSSet * _additionalAssetUUIDs;
    NSSet * _assetUUIDs;
    <PUSearchGridDataSourceDelegate> * _delegate;
    PHFetchResult * _fetchResult;
    BOOL  _finished;
    BOOL  _hasPendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _searchCategories;
    unsigned int  _taskId;
}

@property (nonatomic, retain) NSSet *additionalAssetUUIDs;
@property (nonatomic, retain) NSSet *assetUUIDs;
@property (nonatomic) <PUSearchGridDataSourceDelegate> *delegate;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (getter=isFinished, nonatomic, readonly) BOOL finished;
@property (nonatomic) BOOL hasPendingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned int searchCategories;
@property (nonatomic) unsigned int taskId;

- (void).cxx_destruct;
- (void)_inqClearPendingChanges;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned int)arg1;
- (BOOL)_isCancelledWithTaskId:(unsigned int)arg1;
- (void)_updateAssetUUIDs:(id)arg1 additionalAssetUUIDs:(id)arg2 taskId:(unsigned int)arg3 completion:(id /* block */)arg4;
- (id)additionalAssetUUIDs;
- (id)assetUUIDs;
- (id)delegate;
- (id)fetchResult;
- (BOOL)hasPendingChanges;
- (id)init;
- (BOOL)isFinished;
- (void)mergePendingChanges;
- (id)queue;
- (unsigned int)searchCategories;
- (void)setAdditionalAssetUUIDs:(id)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setHasPendingChanges:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (void)setSearchCategories:(unsigned int)arg1;
- (void)setTaskId:(unsigned int)arg1;
- (unsigned int)taskId;
- (void)updateAssetUUIDs:(id)arg1 additionalAssetUUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAssetUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
