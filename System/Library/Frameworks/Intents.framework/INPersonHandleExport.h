/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol INPersonHandleExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * label; 
@required
-(id)init;
-(void)setType:(long long)arg1;
-(long long)type;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

