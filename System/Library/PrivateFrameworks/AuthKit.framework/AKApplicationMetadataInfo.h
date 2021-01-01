/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding> {

	NSString* _authorizedAppListVersion;
	NSDictionary* _teams;

}

@property (nonatomic,copy,readonly) NSString * authorizedAppListVersion;              //@synthesize authorizedAppListVersion=_authorizedAppListVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * teams;                             //@synthesize teams=_teams - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSString *)authorizedAppListVersion;
-(NSDictionary *)teams;
@end

