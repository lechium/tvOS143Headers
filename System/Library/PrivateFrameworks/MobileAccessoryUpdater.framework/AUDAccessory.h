/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileAccessoryUpdater/MobileAccessoryUpdater-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AUDAccessory : NSObject <NSSecureCoding, NSCopying> {

	NSString* _uid;
	NSString* _fwVersion;

}

@property (nonatomic,copy,readonly) NSString * uid;              //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSString * fwVersion;               //@synthesize fwVersion=_fwVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uid;
-(id)initWithUID:(id)arg1 ;
-(NSString *)fwVersion;
-(void)setFwVersion:(NSString *)arg1 ;
@end

