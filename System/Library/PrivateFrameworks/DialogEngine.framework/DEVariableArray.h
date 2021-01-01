/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEVariable.h>

@interface DEVariableArray : DEVariable
-(id)init;
-(id)initWithName:(id)arg1 ;
-(id)getItem:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(unsigned long long)getLength;
@end
