//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "DMDConfigurationSource-Protocol.h"

@class DMDConfigurationOrganization, DMFReportingRequirements, NSString, NSXPCListenerEndpoint;

@interface DMDConfigurationSource : NSManagedObject <DMDConfigurationSource>
{
}

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *organizationIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @dynamic listenerEndpoint;
@property(copy, nonatomic) NSString *machServiceName; // @dynamic machServiceName;
@property(retain, nonatomic) DMDConfigurationOrganization *organization; // @dynamic organization;
@property(retain, nonatomic) DMFReportingRequirements *reportingRequirements; // @dynamic reportingRequirements;
@property(readonly) Class superclass;

@end

