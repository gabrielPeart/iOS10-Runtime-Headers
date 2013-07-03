/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSMutableArray, PLImageTable;

@interface PLTemporaryImageTable : NSObject  {
    PLImageTable *_imageTable;
    unsigned int _nextTableEntryIndex;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    NSString *_imageTablePath;
    int _imageFormat;
}


- (void)insertItemAtIndex:(unsigned int)arg1;
- (id)imageForItemAtIndex:(unsigned int)arg1;
- (id)dataForItemAtIndex:(unsigned int)arg1 widthOut:(int*)arg2 heightOut:(int*)arg3 bytesPerRowOut:(int*)arg4 dataWidthOut:(int*)arg5 dataHeightOut:(int*)arg6 imageDataOffset:(int*)arg7;
- (void)setImage:(id)arg1 videoDuration:(id)arg2 forItemAtIndex:(unsigned int)arg3;
- (id)initWithWithPath:(id)arg1 imageFormat:(int)arg2;
- (unsigned int)_imageTableIndexForItemIndex:(unsigned int)arg1;
- (void)removeItemAtIndex:(unsigned int)arg1;
- (void)reset;
- (void)dealloc;
- (void)_cleanup;

@end