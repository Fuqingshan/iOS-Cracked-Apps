//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYMovieOperationAdData, UIImageView, UILabel;
@protocol QYMovieOperationAdViewDelegate;

@interface QYMovieOperationAdView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_activityImage;
    UIImageView *_moreImage;
    UIView *_line;
    id <QYMovieOperationAdViewDelegate> _delegate;
    QYMovieOperationAdData *_adData;
}

@property(retain, nonatomic) QYMovieOperationAdData *adData; // @synthesize adData=_adData;
@property(nonatomic) __weak id <QYMovieOperationAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toActivityView;
- (void)layoutWithData:(id)arg1;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

