/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDoorbellBulletinUtilities.h>

@protocol HMDDoorbellBulletinUtilities <NSObject>
@required
+(id)localizedDoorbellMessageForSignificantEvents:(id)arg1;
+(id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1;
+(id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+(id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1;
+(id)localizedMessageForCharacteristic:(id)arg1;
+(id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;

@end


@class NSString;

@interface HMDDoorbellBulletinUtilities : HMFObject <HMFLogging, HMDDoorbellBulletinUtilities>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)localizedDoorbellMessageForSignificantEvents:(id)arg1 ;
+(id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1 ;
+(id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2 ;
+(id)_localizedDoorbellMessageForSignificantEvents:(id)arg1 forAudioAccessory:(BOOL)arg2 ;
+(id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2 ;
+(id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1 ;
+(id)localizedMessageForCharacteristic:(id)arg1 ;
+(id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2 ;
@end

