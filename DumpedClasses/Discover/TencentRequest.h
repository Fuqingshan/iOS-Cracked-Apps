//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSMutableDictionary, NSString, NSURLConnection;

@interface TencentRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    id <TencentRequestDelegate> _delegate;
    NSString *_url;
    NSString *_httpMethod;
    NSMutableDictionary *_params;
    NSURLConnection *_connection;
    NSMutableData *_responseText;
    NSMutableDictionary *_httpHeaders;
    int _xo;
}

+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (id)getRequestWithParams:(id)arg1 httpMethod:(id)arg2 delegate:(id)arg3 requestURL:(id)arg4;
- (void)connection:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (void)connect;
- (void)connectWithRequest:(id)arg1;
- (_Bool)loading;
- (void)handleResponseData:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)parseJsonResponse:(id)arg1 error:(id *)arg2;
- (id)formError:(long long)arg1 userInfo:(id)arg2;
- (id)generateOtherPostBody;
- (id)generatePostBody;
- (void)utfAppendBody:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *httpHeaders; // @dynamic httpHeaders;
@property(readonly, nonatomic) NSMutableDictionary *params; // @dynamic params;

// Remaining properties
@property(readonly, nonatomic) NSURLConnection *connection; // @dynamic connection;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <TencentRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *httpMethod; // @dynamic httpMethod;
@property(readonly, nonatomic) NSMutableData *responseText; // @dynamic responseText;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end
