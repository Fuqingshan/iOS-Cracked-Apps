//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DeviceServiceDelegate.h"
#import "JSONObjectCoding.h"

@class NSArray, NSMutableDictionary, NSString, ServiceDescription;

@interface ConnectableDevice : NSObject <DeviceServiceDelegate, JSONObjectCoding>
{
    NSMutableDictionary *_services;
    ServiceDescription *_consolidatedServiceDescription;
    id <ConnectableDeviceDelegate> _delegate;
    NSString *_id;
    NSString *_lastKnownIPAddress;
    NSString *_lastSeenOnWifi;
    double _lastConnected;
    double _lastDetection;
}

+ (id)connectableDeviceWithDescription:(id)arg1;
@property(nonatomic) double lastDetection; // @synthesize lastDetection=_lastDetection;
@property(nonatomic) double lastConnected; // @synthesize lastConnected=_lastConnected;
@property(copy, nonatomic) NSString *lastSeenOnWifi; // @synthesize lastSeenOnWifi=_lastSeenOnWifi;
@property(copy, nonatomic) NSString *lastKnownIPAddress; // @synthesize lastKnownIPAddress=_lastKnownIPAddress;
@property(nonatomic) __weak id <ConnectableDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ServiceDescription *serviceDescription; // @synthesize serviceDescription=_consolidatedServiceDescription;
- (void).cxx_destruct;
- (id)webAppLauncher;
- (id)toastControl;
- (id)powerControl;
- (id)mouseControl;
- (id)textInputControl;
- (id)keyControl;
- (id)tvControl;
- (id)volumeControl;
- (id)mediaControl;
- (id)mediaPlayer;
- (id)externalInputControl;
- (id)launcher;
- (_Bool)hasAnyCapability:(id)arg1;
- (_Bool)hasCapabilities:(id)arg1;
- (_Bool)hasCapability:(id)arg1;
@property(readonly, nonatomic) NSArray *capabilities;
- (void)deviceService:(id)arg1 capabilitiesAdded:(id)arg2 removed:(id)arg3;
- (void)deviceService:(id)arg1 pairingFailedWithError:(id)arg2;
- (void)deviceServicePairingSuccess:(id)arg1;
- (void)deviceService:(id)arg1 pairingRequiredOfType:(int)arg2 withData:(id)arg3;
- (void)setPairingType:(int)arg1;
- (void)deviceService:(id)arg1 disconnectedWithError:(id)arg2;
- (void)deviceService:(id)arg1 didFailConnectWithError:(id)arg2;
- (void)deviceServiceConnectionSuccess:(id)arg1;
- (void)deviceServiceConnectionRequired:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)serviceWithName:(id)arg1;
- (void)updateConsolidatedServiceDescription:(id)arg1;
- (void)updateCapabilitiesList:(id)arg1;
- (void)removeServiceWithId:(id)arg1;
- (void)addService:(id)arg1;
@property(readonly, nonatomic) _Bool hasServices;
@property(readonly, nonatomic) NSArray *services;
- (int)connectableServiceCount;
- (int)connectedServiceCount;
@property(readonly, nonatomic) _Bool isConnectable;
- (void)disconnect;
- (void)connect;
@property(readonly, nonatomic) _Bool connected;
- (id)connectedServiceNames;
@property(readonly, nonatomic) NSString *commandURL;
@property(readonly, nonatomic) NSString *modelNumber;
@property(readonly, nonatomic) NSString *modelName;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) NSString *deviceType;
@property(readonly, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *serviceId;
@property(readonly, nonatomic) NSString *id; // @synthesize id=_id;
- (id)toJSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
