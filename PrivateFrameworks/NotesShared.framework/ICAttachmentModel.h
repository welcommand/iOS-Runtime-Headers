/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentModel : NSObject <QLPreviewItem> {
    ICAttachment * _attachment;
    BOOL  _hasAdditionalSearchIndexStrings;
    BOOL  _mergeableDataDirty;
    BOOL  _previewGenerationOperationCancelled;
    NSArray * _searchStrings;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (nonatomic, readonly) BOOL canMarkup;
@property (nonatomic, readonly) BOOL canSaveURL;
@property (nonatomic, readonly) BOOL canSaveURLWithOtherAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL generateAsynchronousPreviews;
@property (nonatomic, readonly) BOOL generatePreviewsDuringCloudActivity;
@property (nonatomic, readonly) id /* block */ genericBrickThumbnailCreator;
@property (nonatomic, readonly) id /* block */ genericListThumbnailCreator;
@property BOOL hasAdditionalSearchIndexStrings;
@property (nonatomic, readonly) BOOL hasPreviews;
@property (nonatomic, readonly) BOOL hasThumbnailImage;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } intrinsicContentSize;
@property (getter=isMergeableDataDirty, nonatomic) BOOL mergeableDataDirty;
@property (nonatomic, readonly) BOOL needToGeneratePreviews;
@property (nonatomic, readonly) BOOL needsFullSizePreview;
@property BOOL previewGenerationOperationCancelled;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSArray *quicklookPreviewItems;
@property (nonatomic, readonly) BOOL requiresNetworkToGeneratePreview;
@property (readonly, copy) NSArray *searchStrings;
@property (nonatomic, readonly) BOOL showThumbnailInNoteList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsQuickLook;

+ (id)contentInfoTextWithAttachmentCount:(unsigned int)arg1;
+ (void)deletePreviewItemHardLinkURLs;
+ (struct UIImage { Class x1; }*)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { float x1; float x2; })arg2;
+ (void)populateLocationSearchStringsIfPossible:(id)arg1 forAttachment:(id)arg2;

- (void).cxx_destruct;
- (id)activityItems;
- (id)attachment;
- (void)attachmentDidRefresh:(BOOL)arg1;
- (id)attachmentModelType;
- (void)attachmentWillRefresh:(BOOL)arg1;
- (void)attachmentWillTurnIntoFault;
- (BOOL)canMarkup;
- (BOOL)canSaveURL;
- (BOOL)canSaveURLWithOtherAttachments;
- (void)deleteSubAttachments;
- (void)didCancelPreviewGeneratorOperation;
- (struct UIImage { Class x1; }*)fileIconWithPreferredSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)generateAsynchronousPreviews;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2;
- (BOOL)generatePreviewsDuringCloudActivity;
- (void)generatePreviewsInOperation:(id)arg1;
- (id)generateSearchIndexStringsOperation;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (id)hardLinkFolderPath;
- (BOOL)hasAdditionalSearchIndexStrings;
- (BOOL)hasPreviews;
- (BOOL)hasThumbnailImage;
- (id)initWithAttachment:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateSearchStrings;
- (BOOL)isMergeableDataDirty;
- (BOOL)isReadyToPresent;
- (id)itemProvider;
- (void)mergeWithMergeableData:(id)arg1;
- (BOOL)needToGeneratePreviews;
- (BOOL)needsFullSizePreview;
- (int)populateSearchStrings:(id)arg1;
- (BOOL)previewGenerationOperationCancelled;
- (int)previewImageOrientation;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)quicklookPreviewItems;
- (BOOL)requiresNetworkToGeneratePreview;
- (id)searchStrings;
- (short)sectionForSubAttachments;
- (void)setHasAdditionalSearchIndexStrings:(BOOL)arg1;
- (void)setMergeableDataDirty:(BOOL)arg1;
- (void)setPreviewGenerationOperationCancelled:(BOOL)arg1;
- (BOOL)shouldCropImage;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (BOOL)shouldSyncPreviewImageToCloud:(id)arg1;
- (BOOL)showThumbnailInNoteList;
- (BOOL)supportsQuickLook;
- (id)titleForSubAttachment:(id)arg1;
- (void)undeleteSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (void)writeMergeableData;

@end