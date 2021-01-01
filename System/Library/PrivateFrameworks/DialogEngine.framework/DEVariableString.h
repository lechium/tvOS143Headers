/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEVariable.h>

@class NSString;

@interface DEVariableString : DEVariable

@property (readonly) NSString * printValue; 
@property (readonly) NSString * speakValue; 
-(id)init;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(id)initWithName:(id)arg1 string:(id)arg2 ;
-(id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3 ;
-(NSString *)printValue;
-(NSString *)speakValue;
-(void)setValuePrint:(id)arg1 speak:(id)arg2 ;
@end

