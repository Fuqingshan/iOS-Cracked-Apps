//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TADSplashBaseViewController.h"

#import "TADLandingControlDelegate.h"
#import "TADLandingViewControllerDelegate.h"
#import "TADSafariHelperDelegate.h"

@class NSString, TADDspLabel, TADSafariHelper;

@interface TADSplashViewController : TADSplashBaseViewController <TADSafariHelperDelegate, TADLandingControlDelegate, TADLandingViewControllerDelegate>
{
    TADSafariHelper *_safariHelper;
    TADDspLabel *_dspLabel;
}

@property(retain, nonatomic) TADDspLabel *dspLabel; // @synthesize dspLabel=_dspLabel;
@property(retain, nonatomic) TADSafariHelper *safariHelper; // @synthesize safariHelper=_safariHelper;
- (void).cxx_destruct;
- (void)safariViewControllerDidClose:(id)arg1;
- (void)safariViewControllerDidShow:(id)arg1;
- (_Bool)shouldShowVideoSplash;
- (_Bool)isRetina5P5Inch;
- (_Bool)isRetina4P7Inch;
- (_Bool)isRetina4Inch;
- (_Bool)isiPhone4;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldOpenUrl:(id)arg1;
- (void)openLandingPageWithURL:(id)arg1 withItemInfo:(id)arg2;
- (void)gotoLandingPageController;
- (void)createDspLabel;
- (void)createSplashInfoButton;
- (void)createSplashImageView;
- (id)cropImageForiPhone4:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

