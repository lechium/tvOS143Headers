/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFMessage;

@interface WFMessageContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFMessage * message; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
-(WFMessage *)message;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
@end
