/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding> {

	unsigned long long _participantIdentifier;
	unsigned long long _videoQuality;
	NSNumber* _visibility;
	NSNumber* _prominence;

}

@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoQuality;                       //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,readonly) NSNumber * visibility;                                 //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,readonly) NSNumber * prominence;                                 //@synthesize prominence=_prominence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)visibility;
-(unsigned long long)participantIdentifier;
-(unsigned long long)videoQuality;
-(NSNumber *)prominence;
-(id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4 ;
@end
