//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface CTMyCtripToolBarItemModel : NSObject
{
    NSString *_color;
    NSString *_actionUrl;
    NSString *_label;
    NSString *_metricCode;
    NSString *_iconUrl2x;
    NSString *_iconUrl3x;
    UIImage *_localIcon;
}

@property(retain, nonatomic) UIImage *localIcon; // @synthesize localIcon=_localIcon;
@property(retain, nonatomic) NSString *iconUrl3x; // @synthesize iconUrl3x=_iconUrl3x;
@property(retain, nonatomic) NSString *iconUrl2x; // @synthesize iconUrl2x=_iconUrl2x;
@property(retain, nonatomic) NSString *metricCode; // @synthesize metricCode=_metricCode;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
- (void).cxx_destruct;

@end

