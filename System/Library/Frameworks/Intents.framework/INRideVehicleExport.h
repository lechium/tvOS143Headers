/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CLLocation, NSString, INImage;


@protocol INRideVehicleExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * registrationPlate; 
@property (nonatomic,copy) NSString * manufacturer; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) INImage * mapAnnotationImage; 
@required
-(id)init;
-(NSString *)model;
-(CLLocation *)location;
-(void)setModel:(id)arg1;
-(void)setLocation:(id)arg1;
-(NSString *)manufacturer;
-(void)setManufacturer:(id)arg1;
-(INImage *)mapAnnotationImage;
-(void)setMapAnnotationImage:(id)arg1;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(id)arg1;

@end
