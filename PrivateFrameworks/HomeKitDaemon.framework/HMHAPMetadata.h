/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMHAPMetadata : NSObject <NSSecureCoding> {
    NSArray * _accessoryCategories;
    NSArray * _assistantCharacteristics;
    NSDictionary * _assistantServices;
    NSDictionary * _assistantUnits;
    NSArray * _hapCharacteristics;
    NSArray * _hapServices;
    NSArray * _hapValueUnits;
    NSNumber * _version;
}

@property (nonatomic, retain) NSArray *accessoryCategories;
@property (nonatomic, retain) NSArray *assistantCharacteristics;
@property (nonatomic, retain) NSDictionary *assistantServices;
@property (nonatomic, retain) NSDictionary *assistantUnits;
@property (nonatomic, retain) NSArray *hapCharacteristics;
@property (nonatomic, retain) NSArray *hapServices;
@property (nonatomic, retain) NSArray *hapValueUnits;
@property (nonatomic, retain) NSNumber *version;

+ (id)getSharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCategories;
- (id)assistantCharacteristics;
- (id)assistantServices;
- (id)assistantUnits;
- (id)characteristicTypeDescription:(id)arg1;
- (id)characteristicTypeLocalizedDescription:(id)arg1;
- (id)characteristicValueUnit:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getAssistantCharacteristic:(id)arg1;
- (id)hapCharacteristics;
- (id)hapServices;
- (id)hapValueUnits;
- (id)initWithCoder:(id)arg1;
- (id)mapCharacteristicValueType:(id)arg1;
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapFromAssistantServiceName:(id)arg1;
- (id)mapFromAssistantUnitName:(id)arg1;
- (id)mapReadCharcteristicFromAssistantName:(id)arg1;
- (id)mapToAssistantCharacteristicName:(id)arg1;
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapToAssistantServiceName:(id)arg1;
- (id)mapToAssistantUnitName:(id)arg1;
- (id)mapWriteCharcteristicFromAssistantName:(id)arg1;
- (id)serviceTypeDescription:(id)arg1;
- (id)serviceTypeLocalizedDescription:(id)arg1;
- (void)setAccessoryCategories:(id)arg1;
- (void)setAssistantCharacteristics:(id)arg1;
- (void)setAssistantServices:(id)arg1;
- (void)setAssistantUnits:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setVersion:(id)arg1;
- (bool)supportsLocalization:(id)arg1;
- (id)version;

@end
