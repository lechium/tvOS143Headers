/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSUUID;

@interface AFAudioSessionCoordinationSystemInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _isSupportedAndEnabled;
	NSString* _homeKitRoomName;
	NSUUID* _homeKitMediaSystemIdentifier;
	NSString* _mediaRemoteGroupIdentifier;
	NSString* _mediaRemoteRouteIdentifier;

}

@property (nonatomic,readonly) BOOL isSupportedAndEnabled;                              //@synthesize isSupportedAndEnabled=_isSupportedAndEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeKitRoomName;                         //@synthesize homeKitRoomName=_homeKitRoomName - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * homeKitMediaSystemIdentifier;              //@synthesize homeKitMediaSystemIdentifier=_homeKitMediaSystemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRemoteGroupIdentifier;              //@synthesize mediaRemoteGroupIdentifier=_mediaRemoteGroupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRemoteRouteIdentifier;              //@synthesize mediaRemoteRouteIdentifier=_mediaRemoteRouteIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)buildDictionaryRepresentation;
-(BOOL)isSupportedAndEnabled;
-(NSString *)homeKitRoomName;
-(NSUUID *)homeKitMediaSystemIdentifier;
-(NSString *)mediaRemoteGroupIdentifier;
-(NSString *)mediaRemoteRouteIdentifier;
-(id)initWithIsSupportedAndEnabled:(BOOL)arg1 homeKitRoomName:(id)arg2 homeKitMediaSystemIdentifier:(id)arg3 mediaRemoteGroupIdentifier:(id)arg4 mediaRemoteRouteIdentifier:(id)arg5 ;
@end
