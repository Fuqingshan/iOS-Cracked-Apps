//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, NSTimer, UILabel;

@interface NMRecommendOperationPanelView : UIView
{
    NSArray *_buttonArray;
    NSArray *_labelArray;
    NSArray *_btnBgViewArray;
    NSArray *_customImageViewArray;
    NSArray *_operationPics;
    UILabel *_dailyLabel;
    UIView *_bottomLineView;
    NSString *_topListId;
    NSString *_topListName;
    NSTimer *_sportFmGuideTimer;
    _Bool _fmAnimating;
    _Bool _enableMusicStyleSelection;
    _Bool _sportsFMIconNeedSpin;
    id <NMRecommendOperationPanelViewDelegate> _delegate;
}

+ (double)height;
+ (double)customImageWidth;
+ (double)buttonWidth;
@property(nonatomic) _Bool sportsFMIconNeedSpin; // @synthesize sportsFMIconNeedSpin=_sportsFMIconNeedSpin;
@property(nonatomic) __weak id <NMRecommendOperationPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableMusicStyleSelection; // @synthesize enableMusicStyleSelection=_enableMusicStyleSelection;
- (void).cxx_destruct;
- (void)runFMAdShown:(id)arg1;
- (void)fmGuideShown:(id)arg1;
- (_Bool)shouldStartFlip;
- (void)_stopSportFmGuide;
- (void)_startSportFmGuide:(id)arg1;
- (void)_sportFmGuide:(id)arg1;
- (void)_flipForSkin:(id)arg1 isSportFm:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)viewAndIndexForPoint:(struct CGPoint)arg1;
- (void)toplistButtonClicked:(id)arg1;
- (void)_addDailyRcmdButtonClickedBI:(id)arg1;
- (void)dailySongButtonClicked:(id)arg1;
- (void)fmButtonClicked:(id)arg1;
- (void)setCustomUrlAtIndex:(unsigned long long)arg1 skin:(id)arg2;
- (void)setOperationPictures:(id)arg1;
- (void)setToplistButtonWithName:(id)arg1 resourceId:(id)arg2;
- (void)refreshAllButtons;
- (void)refreshDailySongButton;
- (void)refreshFmButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_setToplistButtonLabel;
- (void)_setToplistButtonForSkin:(id)arg1;
- (void)_setDailyButtonForSkin:(id)arg1;
- (void)_setFmButtonForSkin:(id)arg1;
- (void)_setFmButtonIconForSkin:(id)arg1 isSportFm:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

