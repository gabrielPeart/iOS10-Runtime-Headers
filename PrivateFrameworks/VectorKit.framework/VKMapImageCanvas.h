/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap, VKMapModelDelegate> {
    VKMapModel * _mapModel;
}

@property (nonatomic, retain) NSArray *customFeatureDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsPointsOfInterest;
@property (readonly) Class superclass;

- (void)addCustomFeatureDataSource:(id)arg1;
- (void)cancelTileRequests;
- (void)clearScene;
- (id)customFeatureDataSources;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 device:(struct Device { }*)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (id)initWithTarget:(id)arg1 device:(struct Device { }*)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 localizeLabels:(bool)arg6 mapType:(long long)arg7;
- (id)initWithTarget:(id)arg1 device:(struct Device { }*)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 mapPurpose:(unsigned long long)arg6;
- (bool)isShowingNoDataPlaceholders;
- (unsigned char)labelScaleFactor;
- (bool)localizeLabels;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)setCustomFeatureDataSources:(id)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (void)update;

@end
