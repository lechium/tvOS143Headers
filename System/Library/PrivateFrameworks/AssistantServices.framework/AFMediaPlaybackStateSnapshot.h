/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSDate, NSString;

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long playbackState;                        //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * nowPlayingTimestamp;              //@synthesize nowPlayingTimestamp=_nowPlayingTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)groupIdentifier;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)mediaType;
-(long long)playbackState;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(id)ad_shortDescription;
-(id)serializedBackingStore;
-(NSDate *)nowPlayingTimestamp;
-(id)initWithPlaybackState:(long long)arg1 nowPlayingTimestamp:(id)arg2 mediaType:(id)arg3 groupIdentifier:(id)arg4 ;
@end
