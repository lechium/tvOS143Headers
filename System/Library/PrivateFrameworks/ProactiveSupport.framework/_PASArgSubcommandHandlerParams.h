/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PASArgSubcommand, NSDictionary, NSArray;

@interface _PASArgSubcommandHandlerParams : NSObject {

	_PASArgSubcommand* _subcommand;
	NSDictionary* _options;
	NSArray* _positionalArguments;

}

@property (nonatomic,readonly) _PASArgSubcommand * subcommand;              //@synthesize subcommand=_subcommand - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * positionalArguments;               //@synthesize positionalArguments=_positionalArguments - In the implementation block
-(NSDictionary *)options;
-(id)initWithSubcommand:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3 ;
-(_PASArgSubcommand *)subcommand;
-(NSArray *)positionalArguments;
@end

