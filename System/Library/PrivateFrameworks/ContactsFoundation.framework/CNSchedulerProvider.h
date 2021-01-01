/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNSchedulerProvider.h>

@protocol CNSchedulerProvider <NSObject>
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
@required
-(id)newSynchronousSerialSchedulerWithName:(id)arg1;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNScheduler>)mainThreadScheduler;
-(id)newSerialSchedulerWithName:(id)arg1;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
-(id)newReaderWriterSchedulerWithName:(id)arg1;

@end


@protocol CNScheduler;
@class NSString;

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider> {

	id<CNScheduler> _backgroundScheduler;
	id<CNScheduler> _mainThreadScheduler;
	id<CNScheduler> _inlineScheduler;
	id<CNScheduler> _immediateScheduler;
	/*^block*/id _serialSchedulerProvider;
	/*^block*/id _synchronousSerialSchedulerProvider;
	/*^block*/id _readerWriterSchedulerProvider;

}

@property (nonatomic,copy,readonly) id serialSchedulerProvider;                         //@synthesize serialSchedulerProvider=_serialSchedulerProvider - In the implementation block
@property (nonatomic,copy,readonly) id synchronousSerialSchedulerProvider;              //@synthesize synchronousSerialSchedulerProvider=_synchronousSerialSchedulerProvider - In the implementation block
@property (nonatomic,copy,readonly) id readerWriterSchedulerProvider;                   //@synthesize readerWriterSchedulerProvider=_readerWriterSchedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                     //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                     //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler;                         //@synthesize inlineScheduler=_inlineScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler;                      //@synthesize immediateScheduler=_immediateScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
+(id)makeDefaultProvider;
+(id)providerWithBackgroundConcurrencyLimit:(long long)arg1 ;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(/*^block*/id)arg5 synchronousSerialSchedulerProvider:(/*^block*/id)arg6 readerWriterSchedulerProvider:(/*^block*/id)arg7 ;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNScheduler>)mainThreadScheduler;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(id)serialSchedulerProvider;
-(id)synchronousSerialSchedulerProvider;
-(id)readerWriterSchedulerProvider;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
-(id)newReaderWriterSchedulerWithName:(id)arg1 ;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(/*^block*/id)arg4 synchronousSerialSchedulerProvider:(/*^block*/id)arg5 readerWriterSchedulerProvider:(/*^block*/id)arg6 ;
@end

