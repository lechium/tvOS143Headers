/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchDMDStateResultObject : CATTaskResultObject {

	NSString* _dmdStateDescription;

}

@property (nonatomic,copy) NSString * dmdStateDescription;              //@synthesize dmdStateDescription=_dmdStateDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dmdStateDescription;
-(id)initWithStateDescription:(id)arg1 ;
-(void)setDmdStateDescription:(NSString *)arg1 ;
@end

