/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface SPUnknownDiscoverySessionState : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _unknownAccessories;

}

@property (nonatomic,retain) NSSet * unknownAccessories;              //@synthesize unknownAccessories=_unknownAccessories - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUnknownAccessories:(id)arg1 ;
-(NSSet *)unknownAccessories;
-(void)setUnknownAccessories:(NSSet *)arg1 ;
@end
