/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFRepresentation.h>

@class NSString, WFObjectType;

@interface WFObjectRepresentation : WFRepresentation {

	NSString* _wfName;
	id _object;

}

@property (nonatomic,readonly) id object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * specifiedName; 
@property (nonatomic,readonly) NSString * wfName;                     //@synthesize wfName=_wfName - In the implementation block
@property (nonatomic,readonly) WFObjectType * wfType; 
+(BOOL)supportsSecureCoding;
+(id)object:(id)arg1 ;
+(id)object:(id)arg1 named:(id)arg2 ;
+(id)objects:(id)arg1 ;
+(id)objects:(id)arg1 named:(id)arg2 ;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEncodable;
-(NSString *)wfName;
-(WFObjectType *)wfType;
-(NSString *)specifiedName;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)initWithObject:(id)arg1 named:(id)arg2 ;
@end

