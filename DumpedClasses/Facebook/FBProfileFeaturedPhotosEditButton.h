//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBContextualTimelineOverlayButton, FBLoadingIndicatorView, FBMemPhoto, FBMemVideo, FBProfileIntroCardEditPhotoTile, FBWebPhotoView, UIImage, UIImageView;

@interface FBProfileFeaturedPhotosEditButton : UIView
{
    UIImageView *_glyphView;
    UIImageView *_photoGlyphView;
    UIImageView *_videoGlyphView;
    FBWebPhotoView *_photoView;
    FBContextualTimelineOverlayButton *_overlayButton;
    UIView *_removeButton;
    FBContextualTimelineOverlayButton *_removeButtonOverlay;
    UIImageView *_imageView;
    FBLoadingIndicatorView *_loadingIndicatorView;
    _Bool _enableFeaturedMedia;
    FBProfileIntroCardEditPhotoTile *_editPhotoTile;
    FBMemPhoto *_photo;
    UIImage *_imageBeingUploaded;
    UIImage *_thumbnailVideoBeingUploaded;
    FBMemVideo *_video;
}

@property(retain, nonatomic) FBMemVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) UIImage *thumbnailVideoBeingUploaded; // @synthesize thumbnailVideoBeingUploaded=_thumbnailVideoBeingUploaded;
@property(retain, nonatomic) UIImage *imageBeingUploaded; // @synthesize imageBeingUploaded=_imageBeingUploaded;
@property(retain, nonatomic) FBMemPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) FBProfileIntroCardEditPhotoTile *editPhotoTile; // @synthesize editPhotoTile=_editPhotoTile;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_removeButtonImage;
- (void)layoutSubviews;
- (void)_updateButtonVisibility;
- (void)_updateButtonAccessibilityLabel;
- (id)initWithSession:(id)arg1 imageFlags:(unsigned long long)arg2;

@end

