/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding> {

	id _serviceIdentifierInternal;

}

@property (getter=_lookupKey,nonatomic,copy,readonly) NSString * lookupKey; 
@property (nonatomic,copy,readonly) NSString * serviceID; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)serviceIdentifierForDomain:(id)arg1 ;
+(id)serviceIdentifierForURL:(id)arg1 ;
+(id)serviceIdentifierForBundleID:(id)arg1 ;
+(id)serviceIdentifierForAccessGroup:(id)arg1 ;
+(id)serviceIdentifierForCustomString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)serviceID;
-(id)initWithServiceID:(id)arg1 forType:(long long)arg2 ;
-(id)_lookupKey;
@end
