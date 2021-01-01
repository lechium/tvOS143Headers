/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class NSString, NSDictionary;

@interface STGenericIntentRequest : AFSiriRequest {

	NSString* _appIdentifier;
	NSString* _intentString;
	NSString* _utterance;
	NSDictionary* _info;
	BOOL __launchToForeground;

}

@property (assign,setter=_setLaunchToForeground:,nonatomic) BOOL _launchToForeground;              //@synthesize _launchToForeground=__launchToForeground - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)info;
-(id)appIdentifier;
-(id)utterance;
-(id)_af_analyticsContextDescription;
-(BOOL)_makeAppFrontmost;
-(id)responseWithCode:(long long)arg1 ;
-(BOOL)isForegroundLaunch;
-(id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4 ;
-(id)intentString;
-(BOOL)_launchToForeground;
-(void)_setLaunchToForeground:(BOOL)arg1 ;
@end
