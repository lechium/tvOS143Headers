/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface WFActionSearchGroup : NSObject {

	NSString* _identifier;
	NSString* _localizedName;
	NSArray* _actions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                     //@synthesize actions=_actions - In the implementation block
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSArray *)actions;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3 ;
@end

