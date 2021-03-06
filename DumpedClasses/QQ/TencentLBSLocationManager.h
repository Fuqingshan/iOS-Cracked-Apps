//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSObject<OS_dispatch_source>, NSString, TencentLBSLocation, TencentLBSLocationReGeocoder, TencentLBSTrace;

@interface TencentLBSLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _pausesLocationUpdatesAutomatically;
    _Bool _allowsBackgroundLocationUpdates;
    _Bool _autoUpdatingHeading;
    _Bool _started;
    _Bool _isSingleLocationUpdate;
    _Bool _isSingleLocationFinish;
    _Bool _firstVerify;
    int _headingOrientation;
    NSString *_apiKey;
    id <TencentLBSLocationManagerDelegate> _delegate;
    double _distanceFilter;
    double _desiredAccuracy;
    long long _activityType;
    double _headingFilter;
    unsigned long long _requestLevel;
    unsigned long long _coordinateType;
    double _checkInterval;
    double _locationUpdateInterval;
    CLLocationManager *_locationManager;
    NSString *_appName;
    NSString *_cacheWifi;
    CLLocation *_location;
    CLLocation *_wifiLocation;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_source> *_timer;
    TencentLBSLocationReGeocoder *_reGeocoder;
    TencentLBSLocationReGeocoder *_singleReGeocoder;
    TencentLBSTrace *_trace;
    TencentLBSLocation *_tencentLocation;
    TencentLBSLocation *_cacheLocation;
    TencentLBSLocation *_lastGpsLocation;
    double _magneticHeading;
    long long _activityMark;
    long long _areaStat;
    double _beginTimer;
    double _lastUpdateTime;
    unsigned long long _singleRequestLevel;
    double _locationTimeout;
    unsigned long long _tryTime;
}

@property unsigned long long tryTime; // @synthesize tryTime=_tryTime;
@property(nonatomic) double locationTimeout; // @synthesize locationTimeout=_locationTimeout;
@property(nonatomic) unsigned long long singleRequestLevel; // @synthesize singleRequestLevel=_singleRequestLevel;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) double beginTimer; // @synthesize beginTimer=_beginTimer;
@property(nonatomic) long long areaStat; // @synthesize areaStat=_areaStat;
@property(nonatomic) long long activityMark; // @synthesize activityMark=_activityMark;
@property(nonatomic) double magneticHeading; // @synthesize magneticHeading=_magneticHeading;
@property(nonatomic) _Bool firstVerify; // @synthesize firstVerify=_firstVerify;
@property(nonatomic) _Bool isSingleLocationFinish; // @synthesize isSingleLocationFinish=_isSingleLocationFinish;
@property(nonatomic) _Bool isSingleLocationUpdate; // @synthesize isSingleLocationUpdate=_isSingleLocationUpdate;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) TencentLBSLocation *lastGpsLocation; // @synthesize lastGpsLocation=_lastGpsLocation;
@property(retain, nonatomic) TencentLBSLocation *cacheLocation; // @synthesize cacheLocation=_cacheLocation;
@property(retain, nonatomic) TencentLBSLocation *tencentLocation; // @synthesize tencentLocation=_tencentLocation;
@property(retain, nonatomic) TencentLBSTrace *trace; // @synthesize trace=_trace;
@property(retain, nonatomic) TencentLBSLocationReGeocoder *singleReGeocoder; // @synthesize singleReGeocoder=_singleReGeocoder;
@property(retain, nonatomic) TencentLBSLocationReGeocoder *reGeocoder; // @synthesize reGeocoder=_reGeocoder;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CLLocation *wifiLocation; // @synthesize wifiLocation=_wifiLocation;
@property(retain) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *cacheWifi; // @synthesize cacheWifi=_cacheWifi;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool autoUpdatingHeading; // @synthesize autoUpdatingHeading=_autoUpdatingHeading;
@property(nonatomic) double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
@property(nonatomic) double checkInterval; // @synthesize checkInterval=_checkInterval;
@property(nonatomic) unsigned long long coordinateType; // @synthesize coordinateType=_coordinateType;
@property(nonatomic) unsigned long long requestLevel; // @synthesize requestLevel=_requestLevel;
@property(nonatomic) int headingOrientation; // @synthesize headingOrientation=_headingOrientation;
@property(nonatomic) double headingFilter; // @synthesize headingFilter=_headingFilter;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates; // @synthesize allowsBackgroundLocationUpdates=_allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically; // @synthesize pausesLocationUpdatesAutomatically=_pausesLocationUpdatesAutomatically;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(nonatomic) __weak id <TencentLBSLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)getLocationWithWifi:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)singleLocationUpdate:(id)arg1;
- (void)finishUpdateLocation:(id)arg1 error:(id)arg2;
- (void)traceAndUpdate:(id)arg1 timestamp:(double)arg2 error:(id)arg3;
- (void)timerEventHandler:(double)arg1;
- (id)createDispatchTimerWithInterval:(double)arg1;
- (void)disallowDeferredLocationUpdates;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)cancelRequestLocation;
- (_Bool)requestLocationWithRequestLevel:(unsigned long long)arg1 locationTimeout:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)requestLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

