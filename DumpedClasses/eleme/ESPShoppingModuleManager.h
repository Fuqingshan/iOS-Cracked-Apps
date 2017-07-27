//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMModuleManager.h"

@class NSString;

@interface ESPShoppingModuleManager : NSObject <NVMModuleManager>
{
}

+ (void)load;
- (void)dealloc;
- (void)envDidRebuilt;
- (void)addNotifications;
- (id)searchViewControllerWithParams:(id)arg1;
- (id)evaluateViewControllerWithParams:(id)arg1;
- (id)restaurantListViewControllerWithParams:(id)arg1;
- (id)restaurantDetailViewControllerWithParams:(id)arg1;
- (id)foodDetailViewControllerWithParams:(id)arg1;
- (void)registerOpenURLSchemes;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 didHandleVersionWithInfo:(id)arg2;
- (void)registerServices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
