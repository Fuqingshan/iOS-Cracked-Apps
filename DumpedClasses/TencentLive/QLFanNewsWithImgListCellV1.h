//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class GMGridView, NSMutableArray, NSString, QLJCEONAFanNewsWithImgList, QLRichLabel, QLSImageView, UILabel;

@interface QLFanNewsWithImgListCellV1 : QLBaseTabelViewCell <GMGridViewDataSource, GMGridViewActionDelegate, UIScrollViewDelegate>
{
    UILabel *_modelTitleLabel;
    QLRichLabel *_basicInfoLabel;
    GMGridView *_gridView;
    QLSImageView *_userHeadImg;
    UILabel *_userIntroLabel;
    QLSImageView *_userMessageImg;
    UILabel *_useInfoCountLabel;
    QLJCEONAFanNewsWithImgList *_list;
    NSMutableArray *_aryItems;
    QLSImageView *_modelTitleMarklabelImg;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (double)cellTotalHeight:(id)arg1;
@property(retain, nonatomic) UILabel *useInfoCountLabel; // @synthesize useInfoCountLabel=_useInfoCountLabel;
@property(retain, nonatomic) QLSImageView *userMessageImg; // @synthesize userMessageImg=_userMessageImg;
@property(retain, nonatomic) UILabel *userIntroLabel; // @synthesize userIntroLabel=_userIntroLabel;
@property(retain, nonatomic) QLSImageView *userHeadImg; // @synthesize userHeadImg=_userHeadImg;
@property(retain, nonatomic) GMGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) QLRichLabel *basicInfoLabel; // @synthesize basicInfoLabel=_basicInfoLabel;
@property(retain, nonatomic) QLSImageView *modelTitleMarklabelImg; // @synthesize modelTitleMarklabelImg=_modelTitleMarklabelImg;
@property(readonly, nonatomic) UILabel *modelTitleLabel; // @synthesize modelTitleLabel=_modelTitleLabel;
@property(readonly, nonatomic) NSMutableArray *aryItems; // @synthesize aryItems=_aryItems;
@property(retain, nonatomic) QLJCEONAFanNewsWithImgList *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)getPhotoThumbnailURLs;
- (id)getPhotoOriginalURLs;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)startLoadModel;
- (id)horizontalGridView;
- (void)setLiveStyle:(_Bool)arg1;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)singleClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
