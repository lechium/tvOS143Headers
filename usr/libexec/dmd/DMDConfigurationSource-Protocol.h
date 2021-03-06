//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DMFReportingRequirements, NSString, NSXPCListenerEndpoint;

@protocol DMDConfigurationSource <NSObject>
@property(retain, nonatomic) DMFReportingRequirements *reportingRequirements;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property(copy, nonatomic) NSString *machServiceName;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *organizationIdentifier;
@property(copy, nonatomic) NSString *identifier;
@end

