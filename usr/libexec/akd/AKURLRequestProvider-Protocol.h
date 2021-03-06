//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AKAppleIDAuthenticationContext, NSData, NSURLRequest;

@protocol AKURLRequestProvider <NSObject>
@property(readonly, nonatomic) _Bool shouldCacheResource;
@property(readonly, nonatomic) AKAppleIDAuthenticationContext *context;
- (unsigned long long)expectedResponseType;
- (_Bool)validateResponseData:(NSData *)arg1 error:(id *)arg2;
- (NSURLRequest *)buildRequest:(id *)arg1;
@end

