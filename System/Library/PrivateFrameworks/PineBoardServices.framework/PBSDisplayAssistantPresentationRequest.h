/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PBSDisplayMode;

@interface PBSDisplayAssistantPresentationRequest : NSObject <NSCopying, NSSecureCoding> {

	PBSDisplayMode* _sourceDisplayMode;
	PBSDisplayMode* _destinationDisplayMode;
	long long _kind;
	long long _source;

}

@property (nonatomic,readonly) PBSDisplayMode * sourceDisplayMode;                   //@synthesize sourceDisplayMode=_sourceDisplayMode - In the implementation block
@property (nonatomic,readonly) PBSDisplayMode * destinationDisplayMode;              //@synthesize destinationDisplayMode=_destinationDisplayMode - In the implementation block
@property (nonatomic,readonly) long long kind;                                       //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long source;                                     //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)upgradeAttemptRequestFromSource:(long long)arg1 ;
+(id)cableCheckRequestFromSource:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(long long)kind;
-(id)initWithSourceDisplayMode:(id)arg1 destinationDisplayMode:(id)arg2 kind:(long long)arg3 source:(long long)arg4 ;
-(PBSDisplayMode *)sourceDisplayMode;
-(PBSDisplayMode *)destinationDisplayMode;
-(id)initWithDestinationDisplayMode:(id)arg1 kind:(long long)arg2 source:(long long)arg3 ;
@end

