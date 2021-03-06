/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _instructions;
	NSDictionary* _pageFields;

}

@property (nonatomic,copy,readonly) NSArray * instructions;                 //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pageFields;              //@synthesize pageFields=_pageFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)instructions;
-(id)dataForInvocationPoint:(id)arg1 ;
-(NSDictionary *)pageFields;
-(id)initWithInstructions:(id)arg1 pageFields:(id)arg2 ;
@end

