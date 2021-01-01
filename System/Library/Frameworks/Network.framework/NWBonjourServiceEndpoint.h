/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * domain; 
+(unsigned)endpointType;
+(id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

