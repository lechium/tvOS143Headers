/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXButtonEventMutating.h>

@class SVXButtonEvent, NSString;

@interface _SVXButtonEventMutation : NSObject <SVXButtonEventMutating> {

	SVXButtonEvent* _baseModel;
	long long _type;
	unsigned long long _timestamp;
	struct {
		unsigned isDirty : 1;
		unsigned hasType : 1;
		unsigned hasTimestamp : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

