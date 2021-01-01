/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEConditionEntry : NSObject {

	shared_ptr<siri::dialogengine::ConditionEntry>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::ConditionEntry>* This;              //@synthesize This=_This - In the implementation block
@property (assign) int type; 
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::ConditionEntry>*)arg1 ;
-(shared_ptr<siri::dialogengine::ConditionEntry>*)This;
-(id)initWithSharedPtr:(void*)arg1 ;
-(void*)getRawSharedPtr;
@end

