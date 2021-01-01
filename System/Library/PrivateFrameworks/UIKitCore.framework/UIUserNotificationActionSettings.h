/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _category;
	NSDictionary* _actionsByContext;

}

@property (nonatomic,copy) NSString * category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDictionary * actionsByContext;              //@synthesize actionsByContext=_actionsByContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)actions;
-(id)actionsForContext:(unsigned long long)arg1 ;
-(id)initWithCategory:(id)arg1 actionsByContext:(id)arg2 ;
-(unsigned long long)_maximumActionsForContext:(unsigned long long)arg1 ;
-(id)validatedSettings;
-(NSDictionary *)actionsByContext;
-(void)setActionsByContext:(NSDictionary *)arg1 ;
@end

