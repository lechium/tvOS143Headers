/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFDefaultShortcut : NSObject {

	NSString* _identifier;

}

@property (getter=isAlwaysVisibleOnWatch,nonatomic,readonly) BOOL alwaysVisibleOnWatch; 
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
+(id)allDefaultShortcuts;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)workflowRecordWithError:(id*)arg1 ;
-(long long)relevanceWithContext:(id)arg1 ;
-(BOOL)isAlwaysVisibleOnWatch;
@end

