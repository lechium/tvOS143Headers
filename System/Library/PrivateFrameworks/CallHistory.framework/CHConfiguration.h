/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CHConfiguration.h>

@protocol CHConfiguration <NSObject>
@property (assign,nonatomic,__weak) id<CHConfigurationDelegate> delegate; 
@property (getter=isCloudKitEnabled,nonatomic,readonly) BOOL cloudKitEnabled; 
@required
-(id<CHConfigurationDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isCloudKitEnabled;

@end


@protocol CHKeyValueDataSource, CHConfigurationDelegate;
@class NSString;

@interface CHConfiguration : NSObject <CHConfiguration> {

	id<CHKeyValueDataSource> _dataSource;
	id<CHConfigurationDelegate> _delegate;

}

@property (nonatomic,readonly) id<CHKeyValueDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CHConfigurationDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCloudKitEnabled,nonatomic,readonly) BOOL cloudKitEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CHConfigurationDelegate>)delegate;
-(void)setDelegate:(id<CHConfigurationDelegate>)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(BOOL)isCloudKitEnabled;
-(id<CHKeyValueDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
@end

