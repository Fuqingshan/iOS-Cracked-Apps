//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol QYPlayerUserTouchViewDelegate;

@interface QYPlayerUserTouchView : UIView
{
    NSArray *_passthroughViews;
    CDUnknownBlockType _closeGuide;
    id <QYPlayerUserTouchViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QYPlayerUserTouchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType closeGuide; // @synthesize closeGuide=_closeGuide;
@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

