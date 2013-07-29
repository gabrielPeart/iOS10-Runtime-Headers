/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSIndexPath, NSIndexSet, NSString, NSSet, UICollectionViewLayoutAttributes, <PUCollectionViewLayoutTransitioningDelegate>;

@interface PUCollectionViewFlowLayout : UICollectionViewFlowLayout <PUReorderableLayout, PUGridLayoutProtocol, PUCollectionViewLayoutDelegating> {
    NSIndexSet *_deletedSections;
    NSSet *_deletedItemIndexPaths;
    NSIndexPath *_reorderingSourceIndexPath;
    NSIndexPath *_reorderingTargetIndexPath;
    NSIndexPath *_reorderingInsertedIndexPath;
    UICollectionViewLayoutAttributes *_globalFooterLayoutAttributes;
    NSIndexPath *globalFooterIndexPath;
    float globalTopPadding;
    float globalBottomPadding;
    NSString *sectionHeaderElementKind;
    float sectionTopPadding;
    <PUCollectionViewLayoutTransitioningDelegate> *transitioningDelegate;
    NSSet *_hiddenItemIndexPaths;
    float _globalFooterHeight;
}

@property <PUCollectionViewLayoutTransitioningDelegate> * transitioningDelegate;
@property(readonly) NSIndexPath * globalFooterIndexPath;
@property float globalFooterHeight;
@property float globalTopPadding;
@property float globalBottomPadding;
@property(copy) NSSet * hiddenItemIndexPaths;
@property(copy) NSString * sectionHeaderElementKind;
@property float sectionHeaderHeight;
@property float sectionTopPadding;


- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 ignoringReordering:(BOOL)arg2;
- (void)_updateLayoutAttributes:(id)arg1 ignoringReordering:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForGlobalFooter;
- (void)endInsertingItem;
- (void)beginInsertingItemAtIndexPath:(id)arg1;
- (void)endReordering;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (id)reorderedIndexPath:(id)arg1;
- (void)beginReorderingItemAtIndexPath:(id)arg1;
- (void)setSectionTopPadding:(float)arg1;
- (float)sectionTopPadding;
- (void)setSectionHeaderElementKind:(id)arg1;
- (void)setHiddenItemIndexPaths:(id)arg1;
- (id)hiddenItemIndexPaths;
- (void)setGlobalBottomPadding:(float)arg1;
- (float)globalBottomPadding;
- (void)setGlobalTopPadding:(float)arg1;
- (float)globalTopPadding;
- (id)globalFooterIndexPath;
- (void)setGlobalFooterHeight:(float)arg1;
- (float)globalFooterHeight;
- (id)assetIndexPathsForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sectionHeaderElementKind;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (void)setTransitioningDelegate:(id)arg1;
- (id)transitioningDelegate;
- (float)sectionHeaderHeight;
- (void)setSectionHeaderHeight:(float)arg1;

@end