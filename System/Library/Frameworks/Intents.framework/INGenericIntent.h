/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol INGenericIntent <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
@required
-(NSString *)domain;
-(void)setDomain:(id)arg1;
-(NSString *)verb;
-(void)setVerb:(id)arg1;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(id)arg1;
-(BOOL)isGenericIntent;

@end
