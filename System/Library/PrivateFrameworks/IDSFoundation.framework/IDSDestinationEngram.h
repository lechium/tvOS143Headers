/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination {

	ENGroup* _underlyingGroup;

}

@property (nonatomic,retain,readonly) ENGroup * underlyingGroup;              //@synthesize underlyingGroup=_underlyingGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(id)destinationURIs;
-(id)initWithENGroup:(id)arg1 ;
-(ENGroup *)underlyingGroup;
@end

